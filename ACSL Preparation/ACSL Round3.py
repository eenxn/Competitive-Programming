import math
import os
import random
import re
import sys

cards = ["K", "Q", "J", "T", "9", "8", "7", "6", "5", "4", "3", "2", "A"]
red = ["H", "D"]
black = ["S", "C"]

def checktable(table, player):
    ismove = False
    for j in range(0, 8):
        if not table[j]: 
            continue

        for i in range(0, 8): 
            if i == j or not table[i]: 
                continue
            
            bottom_card_j = table[j][0]
            top_card_i = table[i][-1] 
            
            find = cards.index(top_card_i[0]) + 1 
            if find == 13: 
                continue

            if cards.index(bottom_card_j[0]) == find: 
                if (bottom_card_j[1] in red and top_card_i[1] in black) or \
                   (bottom_card_j[1] in black and top_card_i[1] in red): 
                    
                    table[i].extend(table[j]) 
                    table[j] = [] 
                    ismove = True
                    
                    if j % 2 == 0 and len(player) > 0: 
                        mnidx = -1
                        best_k = -1
                        for k in range(0, len(player)):
                            if cards.index(player[k][0]) > mnidx: 
                                mnidx = cards.index(player[k][0])
                                best_k = k
                        table[j].append(player.pop(best_k)) 
                    
                    return ismove 
    return ismove

            
def checkhand(player, table):
    ismove = False
    while len(player) > 0: 
        played_this_time = False
        
        for cur in range(len(player)): 
            if player[cur][0] == 'K':
                for i in range(1, 8, 2): 
                    if not table[i]: 
                        table[i].append(player.pop(cur)) 
                        ismove = True
                        played_this_time = True 
                        break

            else:
                find = cards.index(player[cur][0]) - 1

                for j in range(0, 8): 
                    if not table[j]: 
                        continue
                        
                    top_card = table[j][-1] 
                    
                    if cards.index(top_card[0]) == find: 
                        if (top_card[1] in red and player[cur][1] in black) or \
                           (top_card[1] in black and player[cur][1] in red): 
                            table[j].append(player.pop(cur)) 
                            ismove = True
                            played_this_time = True
                            break
            
            if played_this_time: 
                break 

        if not played_this_time:
            break

    return ismove
                

def playGame(deck):
    arr = deck.split(' ')
    p1 = []
    p2 = []
    table = []
    pile = []
    for i in range(0, 14):
        if i % 2 == 0:
            p1.append(arr[i])
        else:
            p2.append(arr[i])

    for i in range(14, 18):
        table.append([arr[i]]) 
        table.append([]) 

    for i in range(18, len(arr)): 
        pile.append(arr[i])

    turn = 1
    deadlock_counter = 0 
    
    while len(p1) > 0 and len(p2) > 0:
        made_move = False
        if turn == 1:
            m1 = checktable(table, p1) 
            m2 = checkhand(p1, table)
            if not m1 and not m2: 
                if len(pile) > 0: 
                    p1.append(pile.pop(0))
                    made_move = True
            else:
                made_move = True
            turn = 0 
            
        elif turn == 0:
            m1 = checktable(table, p2) 
            m2 = checkhand(p2, table)
            if not m1 and not m2:
                if len(pile) > 0:
                    p2.append(pile.pop(0))
                    made_move = True
            else:
                made_move = True
            turn = 1 
            
        if not made_move:
            deadlock_counter += 1
        else:
            deadlock_counter = 0
            
        if deadlock_counter >= 2:
            break

    winner = "1" if len(p1) == 0 else "2"
    
    out = [winner]
    for i in range(8):
        if not table[i]:
            out.append("E")
        else:
            out.append(table[i][-1])
            
    return " ".join(out) 
        

if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    # deck = input()
    deck = "JS AD 8S 2D 5D 5C 8D 5H TH 7D 4C TS QD KD JD 3H 3C 2S 7C 7H AH 7S 2H 4H KS AC QC 9H 9C 6S 4S QS 8H"

    result = playGame(deck)
    print(result)
    
    # fptr.write(result + '\n')
    # fptr.close()
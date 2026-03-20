#include <iostream>
using namespace std;
#include "sandd.h"

int getPrice (int P){

    long long low = 0;
    long long high = P;
    int ans;

    while(low<=high)
    {
        int mid = (low+high)/2;
        long long dmid = demand(mid);
        long long smid = supply(mid);

        if(dmid > smid) low = mid+1;
        else if(dmid < smid) high = mid-1;
        else
        {
            ans = mid;
            break;
        }
    }

    return ans;
}

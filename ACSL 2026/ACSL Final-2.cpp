#include <bits/stdc++.h>
using namespace std;
#define int long long

bool is_p[10000];
set<int> purple_set;
set<int> lime_set;
set<int> fuchsia_set;
bool initialized = false;

void precompute() {
    if (initialized) return;

    fill(is_p, is_p + 10000, true);
    is_p[0] = is_p[1] = false;
    for (int i = 2; i * i < 10000; i++) {
        if (is_p[i]) {
            for (int j = i * i; j < 10000; j += i) {
                is_p[j] = false;
            }
        }
    }

    for (int k = 3; k <= 10; k++) {
        for (int n = 1; ; n++) {
            int val = ((k - 2) * n * n - (k - 4) * n) / 2;
            if (val > 9999) break;
            if (val >= 1) purple_set.insert(val);
        }
    }

    vector<int> lst;
    for (int i = 1; i < 10000; i += 2) {
        lst.push_back(i);
    }
    size_t idx = 1;
    while (idx < lst.size()) {
        int step = lst[idx];
        vector<int> next_lst;
        for (size_t i = 0; i < lst.size(); i++) {
            if ((i + 1) % step != 0) {
                next_lst.push_back(lst[i]);
            }
        }
        lst = next_lst;
        idx++;
    }
    for (int val : lst) {
        if (is_p[val]) {
            lime_set.insert(val);
        }
    }

    int a = 5, b = 8;
    while (a <= 9999) {
        fuchsia_set.insert(a);
        int next_fib = a + b;
        a = b;
        b = next_fib;
    }

    initialized = true;
}

int sum_digits(int n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

bool is_silver(int n) {
    if (n <= 3 || is_p[n]) return false;
    int temp = n;
    int factor_digit_sum = 0;
    int d = 2;
    while (d * d <= temp) {
        while (temp % d == 0) {
            factor_digit_sum += sum_digits(d);
            temp /= d;
        }
        d++;
    }
    if (temp > 1) {
        factor_digit_sum += sum_digits(temp);
    }
    return sum_digits(n) == factor_digit_sum;
}

bool is_yellow(int n) {
    if (!is_p[n]) return false;
    set<int> seen;
    int curr = n;
    for (int iter = 0; iter < 20; iter++) {
        int next_curr = 0;
        int t = curr;
        while (t > 0) {
            int digit = t % 10;
            next_curr += digit * digit;
            t /= 10;
        }
        curr = next_curr;
        if (curr == 1) return true;
        if (seen.count(curr)) return false;
        seen.insert(curr);
    }
    return false;
}

bool is_teal(int n) {
    if (!is_p[n]) return false;
    string s = to_string(n);
    int L = s.length();
    
    for (int i = 1; i < L; i++) {
        int part = stoi(s.substr(i));
        if (!is_p[part]) return false;
    }
    
    int part_b = stoi(s.substr(0, L - 1));
    if (!is_p[part_b]) return false;
    
    if (L >= 3) {
        int part_c = stoi(s.substr(1, L - 2));
        if (!is_p[part_c]) return false;
    }
    
    return true;
}

string classifyPlate(string plate) {
    precompute();

    set<int> candidates;
    for (int len = 2; len <= 4; len++) {
        for (int i = 0; i <= (int)plate.length() - len; i++) {
            string sub = plate.substr(i, len);
            int val = stoi(sub);
            if (len == 2 && val >= 10 && val <= 99) candidates.insert(val);
            if (len == 3 && val >= 100 && val <= 999) candidates.insert(val);
            if (len == 4 && val >= 1000 && val <= 9999) candidates.insert(val);
        }
    }

    bool has_F = false, has_L = false, has_P = false, has_S = false, has_T = false, has_Y = false;
    for (int c : candidates) {
        if (fuchsia_set.count(c)) has_F = true;
        if (lime_set.count(c)) has_L = true;
        if (purple_set.count(c)) has_P = true;
        if (is_silver(c)) has_S = true;
        if (is_teal(c)) has_T = true;
        if (is_yellow(c)) has_Y = true;
    }

    string res = "";
    if (has_F) res += "F";
    if (has_L) res += "L";
    if (has_P) res += "P";
    if (has_S) res += "S";
    if (has_T) res += "T";
    if (has_Y) res += "Y";

    return res.empty() ? "NONE" : res;
}

signed main()
{
    string plate;
    getline(cin, plate);

    string result = classifyPlate(plate);

    cout << result << "\n";
}
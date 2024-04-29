/*#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int r = 0, c = 0, rr = 0, cc = 1;
    vector<vector<int>> vec(n, vector<int>(n));

    for(int i = 1; i<=n*n; i++){
        vec[r][c] = i;
        int target_row = r + rr, target_col = c + cc;
        if(target_col==n || target_row == n || target_col==-1 || target_row==-1 || vec[target_row][target_col]!=0){
            int temp = rr;
            rr = cc;
            cc = (-1)*temp;
        }
        r = r+rr;
        c = c+cc;
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/


/*#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void getDigits(int x, vector<int>& count){
    set<int> digits;
    while(x>0){
        count[x%10]++;
        x /= 10;
    }
}

int main(){
    for(int i = 100; i<=999; i++){
        vector<int> count(10, 0);
        getDigits(i, count);
        getDigits(2*i, count);
        getDigits(3*i, count);
        bool repeat = false;
        for(int i = 0; i<=9; i++) if(count[i]>1) repeat = true;
        if(!repeat) cout<<i<<endl;
    }
    return 0;
}*/

/*#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int r = 0, c = 0, rr = 1, cc = 0;
    vector<vector<int>> vec(n, vector<int>(n));

    for(int i = 1; i<=n*n; i++){
        vec[r][c] = i;
        int target_row = r + rr, target_col = c + cc;
        if(target_col==n || target_row == n || target_col==-1 || target_row==-1 || vec[target_row][target_col]!=0){
            int temp = cc;
            cc = rr;
            rr = (-1)*temp;
        }
        r = r+rr;
        c = c+cc;
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/


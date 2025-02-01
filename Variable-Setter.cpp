#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using ull=unsigned long long;
using vi=vector<int>;
using vvi = vector<vector<int>>;
using vs=vector<string>;
using vvs=vector<vector<string>>;
using vb=vector<bool>;
using vvb=vector<vector<bool>>;
using pii = pair<int,int>;
using vll = vector<long long>;
using vvll = vector<vector<long long>>;
using vpii = vector <pii>;
using vvpii = vector<vpii>;
using tupi3 = tuple<int,int,int>;
using vc = vector<char>;
using vvc =vector<vc>;
//2*10^9
//2^31-1
const int inf = 2147483647;
//9*10^18
//2^63-1
const long long llnf =  9223372036854775807;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
#define _GLIBCXX_DEBUG
#define fixpre cout<<fixed<<setprecision(20)
#define outno cout<<"No"<<endl;
#define outyes cout<<"Yes"<<endl;
#define pb push_back
#define ALL(obj) (obj).begin(),(obj).end()
#define pque priority_queue
#define umap unordered_map
#define uset unordered_set
#define ln '\n'
template <typename T> bool chmax(T &a, const T& b) {if (a < b){a = b; return true;} return false;}
template <typename T> bool chmin(T &a, const T& b) {if (a > b){a = b; return true;} return false;}
template <typename T> void sortv(T &a){sort(a.begin(),a.end());}
template <typename T> void sorev(T &a){sort(a.begin(), a.end(), greater<int>());}


int main(){
    
    char a;
    string S;
    int p;
    int ok = 1;
    ///②
    string s;
    while(getline(cin, s)){
        if (s[s.size()-1] != ';') cout << s << endl;
        else {
            ok = 1;
            for (int i=0; i<s.size()-1; i++){
                if (s[i]-48 < 10 && s[i]-48>=0) ok = 1;
                else if (s[i] == '='){
                    ok = 0;
                    break;
                } 
                else ok = 0;
            }
            if (ok == 1){
                cout << "$Standard+" + s << endl;
            }
            else{
                cout << s << endl;
            }
            ok = 0;
        }
        
    }
    ///①
    
}

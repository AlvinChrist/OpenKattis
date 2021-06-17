#include <iostream>
#include <vector>
#include <iomanip>
#define pb push_back
using namespace std;

int checkEndPoint(int dest,int r2,int c2,int row,int col,vector<vector<int>>map){
    if(r2<row)
        if(map[r2+1][c2]==dest)
            return 0;
    if(r2>0)  
        if(map[r2-1][c2]==dest)
            return 0;
    if(c2<col)
        if(map[r2][c2+1]==dest)
            return 0;
    if(c2>0)
        if(map[r2][c2-1]==dest)
            return 0;
    return 9;
}
int path(int r1,int c1,int r2,int c2,int row,int col,vector<vector<int>> map){
    int dest=map[r2][c2];
    int _r1 = r1;
    int _c1 = c1;
    int possibility = 0;
    vector<int> last;
    (r1<row)?(map[r1+1][c1]==dest)?possibility++:0:0;
    (r1>0)?(map[r1-1][c1]==dest)?possibility++:0:0;
    (c1<col)?(map[r1][c1+1]==dest)?possibility++:0:0;
    (c1>0)?(map[r1][c1-1]==dest)?possibility++:0:0;
    if(possibility==0){
        return 9;
    }
    while(true){
        int c=_c1+1,_c=_c1-1,r=_r1+1,_r=_r1-1;        
        if(_r1==r2 && _c1==c2){
            return dest;
        }
        else{
            //cout<<_r1<<" "<<_c1<<'\n';
            bool step=false;
            if(_c1<col  && step==false){
                if(map[_r1][c]==dest){
                    //cout<<"right"<<'\n';
                    last.pb(3);
                    map[_r1][_c1]=9;
                    _c1++;
                    step = true;
                }
            }
            if(_r1>0 && step==false){
                if(map[_r][_c1]==dest ){
                    //cout<<"up"<<'\n';
                    last.pb(2);
                    map[_r1][_c1]=9;
                    _r1--;
                    step = true;
                }
            }
            if(_r1<row  && step==false){
                if(map[r][_c1]==dest){
                    //cout<<"down"<<'\n';
                    last.pb(1);
                    map[_r1][_c1]=9;
                    _r1++;
                    step = true;
                    
                }
            }
            if(_c1>0  && step==false){
                if(map[_r1][_c]==dest){
                    //cout<<"left"<<'\n';
                    last.pb(4);
                    map[_r1][_c1]=9;
                    _c1--;
                    step = true;
                }
            }
            if(step==false){
                map[_r1][_c1]= 9;
                if(!last.empty()){
                    if(last.back()==1)
                        _r1--;
                    else if(last.back()==2)
                        _r1++;
                    else if(last.back()==3){
                        _c1--;
                    }
                    else if(last.back()==4)
                        _c1++;
                    last.pop_back();
                }
                if(_r1==r1 && _c1==c1){
                    possibility--;
                    if(possibility==0){
                        return 9;
                    }
                }
            }   
        }
    }
    return 9;
}
int main(){
    clock_t s, e;
    ios_base::sync_with_stdio(false);
    int r=0,c=0;
    cin>>r>>c;
    vector<vector<int>> map;
    for(int i=0;i<r;i++){
        vector<int> col;
        string _map;
        cin>>_map;
        for(int j=0;j<c;j++){
            col.pb((int)_map[j]-'0');
        }
        map.pb(col);
    }
    int tc=0;
    cin>>tc;
    for(;tc>0;tc--){
        int r1=0,c1=0,r2=0,c2=0;
        cin>>r1>>c1>>r2>>c2;
        r1--;
        r2--;
        c1--;
        c2--;
        int start=map[r1][c1],end=map[r2][c2];
        //cout<<map[r1][c1]<<" " <<map[r2][c2]<<'\n';
        //cout<<start<< " " <<end<<'\n';
        if(start!=end){
            cout<<"neither"<<'\n';
        }
        else if(r1==r2 && c1==c2){
            (start==0)?cout<<"binary"<<'\n':cout<<"decimal"<<'\n';
        }
        else{
            if(checkEndPoint(start,r2,c2,r-1,c-1,map)==9){
                cout<<"neither"<<'\n';
            }
            else{
                s = clock(); 
                int stat=path(r1,c1,r2,c2,r-1,c-1,map);
                e = clock(); 
                double time_taken = double(e - s) / double(CLOCKS_PER_SEC); 
                cout << "Time taken by program is : " << fixed  << time_taken << setprecision(20); 
                cout << " sec " << endl; 
                if(stat!=9){
                    (stat==0)?cout<<"binary"<<'\n':cout<<"decimal"<<'\n';
                }
                else{
                    cout<<"neither"<<'\n';
                }
            }
        }
    }
    return 0;
}
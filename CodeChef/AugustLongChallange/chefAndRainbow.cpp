#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int inf=0x3f3f3f3f;
int read(){
    int ans=0,f=1,c=getchar();
    while(c<'0'||c>'9'){if(c=='-') f=-1; c=getchar();}
    while(c>='0'&&c<='9'){ans=ans*10+(c-'0'); c=getchar();}
    return ans*f;
}
int T,n,s[257],c[257];
int main()
{
    T=read();
    while(T--){
        bool f=false;
        memset(c,0,sizeof(c));
        n=read(); 
        for(int i=1;i<=n;i++){
            s[i]=read();
            if(s[i]>7||s[i]<1) f=1;
            else c[s[i]]=1;
        }
        for(int i=1;i<=7;i++) if(!c[i]) f=1;
        if(f){printf("no\n"); continue;}
        int cnt=(n+1)/2;
        s[0]=-inf; s[n+1]=-inf;
        for(int i=1,j=n;i<=cnt;i++,j--) 
            if(s[i]!=s[j]||s[i]<s[i-1]||s[j]<s[j+1]){
                printf("no\n"); 
                f=1;
                break;
            }
        if(!f) printf("yes\n");
    }
    return 0;
}
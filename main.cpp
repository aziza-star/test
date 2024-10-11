#include <iostream>

using namespace std;

int main()
{
    int n,i,s,w;
    int tab[100000];
    cin>>n;
    s=0;
    w=0;
    for (int i=0;i<=n-1;i++){
        cin>>tab[i];

    }

    for (int i=0;i<=n-1;i++){
            if(tab[i]<0 && s==0){
                w++;
            }
            else if (tab[i]>0){
                s=s+tab[i];
            }
            else if(tab[i]<0 && s!=0){
                s--;
            }

    }
            cout<<w<<endl;

    return 0;
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int string_size=0, gap=0;
    string tide;

        //int z= '0', o = '1', d= '.';
        //cout<< z << endl;
        //cout << o << endl;
        //cout<< d << endl;

    while(cin>> string_size >> gap >> tide)
    {
        int i=0;


        for(i=0; i< string_size - gap; i++)
        {
            //cout<< tide[i]<< "--"<< tide[i+gap] << endl;
            int sum = tide[i] + tide[i+gap];
            //cout<< "Sum = "<< sum << endl;

            if((tide[i]==46 && tide[i+gap]==46 ) || tide[i] != tide[i+gap])
            {
                //cout<< "Yes" << endl;
                if(sum==92){
                tide[i]='0';
                replace( tide.begin(), tide.end(), '.', '1');
                }else if(sum==94){
                replace( tide.begin(), tide.end(), '.', '1');
                }else{
                replace( tide.begin(), tide.end(), '.', '0');
                }

                break;
            }
        }
        if(i== string_size - gap)
        {
            cout<< "No" << endl;
        }else{
            cout<< tide<< endl;
        }




    }
    return 0;
}

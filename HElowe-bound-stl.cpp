#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n;
    cin>>n;
    vector<int>v;
    for(long long int i=0;i<n;i++)
    {
        long long int x;
        cin>>x;
        v.push_back(x);
    }
    long long int q;
    cin>>q;
    while(q--)
    {
        long long int u;
        cin>>u;
        if((find(v.begin(), v.end(), u))==v.end())
            {
                auto it= lower_bound(v.begin(),v.end(),u);
                cout<<"No "<<(it-v.begin())+1<<endl;
            }
            else
            {
                auto it= lower_bound(v.begin(),v.end(),u);
                cout<<"Yes "<<(it-v.begin())+1<<endl;
            }
    }   
    return 0;
}
/* Cant find the sol for this Test Case
Input

94126
12732 18841 21631 27520 29070 34874 37670 45082 51255 59401 61172 67415 68552 73986 87618 
97860 133536 134722 135445 142324 147167 160086 160772 175631 222281 229825 232150 237459 
240845 251370 297026 312526 325929 346586 354089 357064 361817 364414 387568 393447 410146 
428991 429409 458338 460677 465975 478083 521854 525972 540505 542847 557557 566929 571924 
579341 582471 589716 605635 622049 629381 637406 646105 648682 671956 680524 711261 722421 
723808 766780 767278 778559 778761 782920 783349 792544 807209 808256 819010 827021 876095 
878694 881357 891962 896730 915128 920140 920307 957860 958320 969486 985686 993445 1021947 
1034936 1038446 1038957 1046685 1050389 1050917 1052912 1053750 1058362 1068642 1082533 1093499 
1096715 1099657 1101067 1105217 1125654 1127459 1147301 1149598 1160912 1176985 1196367 1234373 
1241695 1246198 1247887 1256687 1265598 1274669 1276819 1281255 1294664 1295515 1295679 1305857 
1315094 1315776 1318043 1335557 1344892 1357216 1360488 1382890 1413060 1430074 1456794 146726


Expected Output

No 47487
No 62531
No 88939
No 35200
No 68281
No 71837
No 1017
No 19846
No 60108
No 5638
No 85962
No 76449
No 40143
No 76337
No 50010
No 15716
No 42486
No 11484
No 50409
No 79463
*/


#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
  while(true){
    int n;
    cin >> n;

    if(n == 0)
      break;

    vector<int> listOne;
    vector<int> listTwo;

    for(int i = 0; i < n; i++){
      int input;
      cin >> input;
      listOne.push_back(input);
    }

    for(int i = 0; i < n; i++){
      int input;
      cin >> input;
      listTwo.push_back(input);
    }

    vector<int> oneSorted = listOne;
    sort(oneSorted.begin(), oneSorted.end());
    sort(listTwo.begin(), listTwo.end());

    map<int, int> sync;

    for(int i = 0; i < n; i++)
      sync[oneSorted[i]] = i;

    vector<int> syncList;

    for(int i = 0; i < n; i++){
      int temp = sync.find(listOne[i])->second;
      syncList.push_back(listTwo[temp]);
    }

    for(int i = 0; i < syncList.size(); i ++)
      cout << syncList[i] << endl;
  }
}

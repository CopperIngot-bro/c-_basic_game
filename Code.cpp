#include <iostream>
#include <vector>
using namespace std;
void ispis(vector<vector<int>>& kokos) {
  for (const auto& red:kokos) {
    for (int broj:red) {
      printf(broj);
    }
    cout << endl;
  }
}
int main() {
  vector<vector<int>> ako = {
  {0,3,8,2,6,5},
  {4,8,9,2,5,1},
  {0,5,4,3,8,9}};
  ispis(ako);
  return 0;
}

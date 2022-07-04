#include <iostream>

using namespace std;
// not the best, wanted to try and not just do it in python
int main(){
  int n;
  bool found = false, notFound = false;
  cout << "please enter number you want factors" << endl;
  cin >> n;

  for(int x = 1; x < n / 2; x++){
    if (n % x == 0){
      found = true;
    }
    else{
      notFound = true;
    }
    if(found){
      cout << x << ",";
    }
  }
}

int main2() {
  cout << "2"<<',';
  for(int x = 3; x < 100 ; x += 2){
    if(x % 2 == 0){
      return 0;
    }
    else{
      cout << x << ",";
    }
  }
}


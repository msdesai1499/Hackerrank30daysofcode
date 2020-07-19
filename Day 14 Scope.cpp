#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
    int s;
      Difference(vector<int>a)
      {
          elements=a;
          s=elements.size();
      }
      void computeDifference()
      {
          maximumDifference=0;
        for(int i=0;i<s;i++)
        {
            for(int j=i+1;j<s;j++)
            {
                int m=abs(elements[i]-elements[j]);
                if(m>maximumDifference)
                {
                    maximumDifference=m;
                }
            }
        }
      }


	// Add your code here

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}

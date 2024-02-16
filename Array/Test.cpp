
  #include <iostream>
  using namespace std;
  int main()
  {
    int s = 6;
      int arr[6] = {1, 2, 3, 4, 5, 6};
      for (int i = 1; i < 6; i++)
      {

          for (int j = i + 1; j < 6; j++)
          {

              for (int k = i + 2; k < 6; k++)
              {
                if (arr[i]+arr[j]+arr[k] == 6)
                {
                    cout<<"yes"<<endl;
                }
                else
                {
                    cout<<"no"<<endl;
                }
                
              }
          }
      }
      return (0);
  }

  


#include <iostream> 
#include <fstream> 
#include <vector>
 
    using namespace std;
 
int main() {
setlocale(LC_ALL, "RU");
setlocale(LC_ALL, ".UTF8");
ifstream fin("input.txt");
ofstream fout("input.txt");
float y;
   
  for(int R=-3;R<=7;R++)
  {
    if(R<-2){
        y = -R-2;
    }else if(R<0){
        y = sqrt(1-pow(R+1,2));
    }else if(R<4){
        y = (sqrt(4-pow(R-2,2)))*(-1);
    }else if(R<6){
        y = (-0.5)*R+2;
    }else{
        y = -1;
    }
       if (fout.is_open())
    {
        fout << y <<endl;
    }
  }
    fout.close();
    float n;
    vector<float> arr;
        while (fin >> n) {
            arr.push_back(n);
        }
        cout << "y:\n";
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
    fin.close();

    return 0;
}
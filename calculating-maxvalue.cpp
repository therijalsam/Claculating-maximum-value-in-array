# include<iostream>


int fmax(int* ptr, int size){
int max= ptr[0];
for (int i = 0; i < size; i++)
{
  if(max<ptr[i]){
    max= ptr[i];
  }
}

return max;

}

int main(){
  int iSize;
 std::cout<<"#Total numbers: ";
 std::cin>>iSize;

int* arr= new int[iSize];
std::cout<<"Enter "<<iSize<<" numbers to check: ";

 for (int  i = 0; i < iSize; i++)
 {
    std::cin>> arr[i];

 }

int answer= fmax(arr, iSize);
std::cout<<"The maximum numer in your imput is: "<<answer<<std::endl;

delete[] arr;
return 0;
}

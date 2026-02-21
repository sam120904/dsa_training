#include <iostream>
using namespace std;
int main() {
int arr1[10];
int sub_sum1[10];
int sub_sum2[10];
int sub_sum3[10];
int i;
cout<<"Enter 10 integers: "<<endl;
for (i=0;i<10;i++){
cin>> arr1[i];
}
cout<<"Enter 3 sub indices: "<<endl;
int sub_index1, sub_index2, sub_index3;
cin>> sub_index1;
cin>> sub_index2;
cin>> sub_index3;

for(i=0;i<sub_index1;i++){
    sub_sum1[i]= arr1[i]+ arr1[i+1];
}

for(i=sub_index1;i<sub_index2;i++){
    sub_sum2[i]= arr1[i]+ arr1[i+2];
}

for(i=sub_index2;i<sub_index3;i++){
    sub_sum3[i]= arr1[i]+ arr1[i+3];
}
cout<<"sub1 :"<<endl;
for(i=0;i<sub_index1;i++){
    cout<< sub_sum1[i]<<endl;
}
cout<<"sub2 :"<<endl;
for(i=sub_index1;i<sub_index2;i++){
    cout<< sub_sum2[i]<<endl;
}
cout<<"sub3 :"<<endl;
for(i=sub_index2;i<sub_index3;i++){
    cout<< sub_sum3[i]<<endl;
}
return 0;
}  
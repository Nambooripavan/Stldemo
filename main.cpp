#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    std::cout<<"STL DEMO"<<std::endl;

    vector<int> v1={10,20,30,40};
    std::cout<<"{"<<endl;

    for_each(begin(v1),end(v1),[](const auto & x){std::cout<<x;});
    
    std::cout<<"}"<<endl;

    return 0;
}
#include <iostream>
#include <vector>
using namespace std ;
class Student{
public:
   char name[30];
   int grade;
};
int main()
{
   int N;
   cin >> N;
   vector<Student> stu(N);
   for(int i=0; i<N; i++){
      cin >> stu[i].name >> stu[i].grade;
   }

   for(int i=0; i<N; i++){
      cout << stu[i].name << " " << stu[i].grade << endl;
   }
}

#include <iostream>
#include <vector> 
using namespace std;

struct _pixel {
    int red;
    int green;
    int blue;
} ;

//// functions/////////////
void collect_user_data(int user[3] );
double check_percentage_difference(int user[3],int index,vector <_pixel> my_pixel);
bool check_result (double percentage_error);

int user_input[3];
bool result = false;
void fill_vector(FILE *myfile,vector <_pixel> &my_pixel);


int main()
{
  double diff;
  vector<_pixel> p;
  FILE *_myfile = fopen ("RGB_DATA.txt", "r");
  if (_myfile == NULL)
  {
      cout<< "unable to load RGB Data"<<"\n";
      return 0;
  }
 else{
   fill_vector(_myfile , p);
 }
   
   
  
 
   for (int i =0; i < 9; i++)
   {
      cout<< "Enter (RGB) for image "<< i<<"\n";
      collect_user_data(user_input);
      result = check_result(check_percentage_difference(user_input,i,p));
      if(!result)
      {
          cout << "test did not passed!!"<<endl;
      }
   }

  return 0;
}

void fill_vector(FILE *myfile,vector <_pixel> &my_pixel)
{
     for(int i =0 ; i < 9 ; i++)
     {
         my_pixel.push_back(_pixel());
         fscanf (myfile, "%d", & my_pixel[i].red);
         fscanf (myfile, "%d", & my_pixel[i].green);
         fscanf (myfile, "%d", & my_pixel[i].blue);
       
     }
     
}

void collect_user_data(int user[3])
{
        cin >> user[0] ;
        cin >> user[1] ;
        cin >> user[2] ;

}


double check_percentage_difference(int user[3],int index,vector <_pixel> my_pixel)
{
    double percentage = 0;
    double user_sum = user[0] + user[1]+user[2];
    double actual_pixel = my_pixel[index].red + my_pixel[index].green + my_pixel[index].blue ;
    percentage =  (user_sum - actual_pixel)/actual_pixel;
    percentage *=100; 
    cout << "per"<< percentage <<endl;
    return abs(percentage);
}

bool check_result(double percentage_error)
{
   
  if (percentage_error > 10.0)
  return false;
  else
  return true;
}
Othman Color vision Project deliverable 2

Description

This project is used to detect the person has color vision disorder or his eye sight is according to the normal person.

In the start of this project we had the RGB data of 9 sample images in RGB_DATA.txt. We take the RGB data input from the patient corresponding to each image and then compare it with the RGB data of that image stored in the RGB_DATA.txt file and calculate percentage error. If percentage error is greater than 10 then the person is suffering from color vision disorder.


## Developer
Othman Alshammari

## Example

To run the program, give the following commands:

```
g++ --std=c++11 main.cpp -o cvp
./cvp
```
i have assumed that i have shown an image to the user and
user is prompted to enter the RGB of provided image as.

Enter (RGB) for image nth

user will enter the RGB according to his perception.

Program will read the actual RGB of the provided image
from the file "RGB_DATA.txt" and will calculate the percentage difference.

I have set threshold of 10 to being within the acceptable 
range if error is lesser than the threshold the program will
display

"test passed"

and will prompt for the next image shown.

Otherwise program will display

"Test was not Passed!"

Criteria to pass the test is that how much closed value a user entered for the particular image and if RGB was close enough to be in tolerateable range then test will be passed.

Severity of the disease can be measured from the fact that 
how many time the user was out of toleratable range.

## C++ Guide

We used console to take input from the user in an array of integer variables. The RGB data of images is oaded from the RGB_DATA.txt file in a vector of datatype structure wich has three members Red, Blue and Green. We use fstream to read the input file and console to present the result.

### Variables and Data Types
1.
struct _pixel {
    int red;
    int green;
    int blue;
} ;
this structure is used to store RGB of an image

2.
Arrays

int user_input[3];

in this array the RGB data is collected from  user.Each index of the array represents the R,G and B respectively.

3.
Vectors

vector<_pixel> p;

This is a vector of datatype pixel struct to collect all the RGB data from RGB_DATA.txt.

Loop will run for 9 iterations and at each iteration one struct is added to the vector.
So each of the index of vector is representing a struct and each struct contains information for RED,GREEN and Blue pixels read from the user.

my_pixel.push_back(_pixel());

Above statement is used to add a pixel struct at the tail of the vector.

         is >>  my_pixel[i].red;
         is >>  my_pixel[i].green;
         is >>  my_pixel[i].blue;


These above statements are reading each pixel from the file against the particular image.

This vector is then passed to another function
check_percentage_difference in order to check the difference between the user provided input and the pixel saved in the .txt file.

4.
double diff;
this variable stores the difference in the RGB value of images stored in the txt file and the RGB vlue from the user.

5.
bool result = false;

this is the variable which collect the result of the test.

### Functions

Several functions are used in this program with various data types according the requirement of application.

collect_user_data(int user[3])

This function is called from the main for every shown image and information is saved in the provided array.

As we know that array is always passed by reference so data is returned by reference. This function will collect data from the user for RGB.

void fill_vector(ifstream &is,vector <_pixel> &my_pixel)

This fuction receives the object for reading the file and the vector to be filled. Program will do several iterations to receive data against each image and add one struct at runtime for each image and get R,G and B.


double check_percentage_difference(int user[3],int index,vector <_pixel> my_pixel)

This function receive array of user data and index of the current image being tested and the vector containing .txt RGB data. Percentage difference between the user input and the actual data will be calculated and returned as type double for the sake of precision.


bool check_result(double percentage_error)

This fuction will receive the percentage error for the current image and will return the result in bool if the the user enter data is with in the matchable range or not.





### Input and Output
Input:
data from Console of RGB values stored in user_input[3] array.
Output:
it is a string which shows that patient has disorder or not
### Decisions

it is dependent on percentage error if error is greater than 10% than the person has color vision disorder otherwise he is healthy. This is determined by the return type of funcrion check_result(check_percentage_difference(user_input,i,p)) which is stored in variable result.

### Iteration
In this project we introduce the idea of storing RGB data in a file and we are assuming we are showing this image to patient and he is entering his perception through the console and by comparing the patient response with actual data we try find he has color vision disorder or not.

### File Input and Output

RGB data is stored in the RGB_DATA.txt and i revised the structure of reading the data as now i am using ifstream library for this purpose.

I got a little conceptual health from 

https://www.tutorialspoint.com/read-integers-from-a-text-file-with-cplusplus-ifstream

that how to read the integer variable from a file.

I run a loop in which i am reading a single integer once in a loop and store in the vector.

This statement is used for this purpose.

is >>  my_pixel[i].red;
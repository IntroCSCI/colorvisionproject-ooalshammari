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

Here is an example of the program running:

```
!!!Replace with an example of the program running with user interaction!!!
```

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
int user_input[3];

in this array the RGB data is collected from  user.

3.
  vector<_pixel> p;
This is a vector of datatype pixel to collect all the RGB data from RGB_DATA.txt

4.
double diff;
this variable stores the difference in the RGB value of images stored in the txt file and the RGB vlue from the user.

5.
bool result = false;

this is the variable which collect the result of the test.



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

I stored the RGB data of images in a file and read file data through an object into vector.
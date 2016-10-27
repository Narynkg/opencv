#include <iostream>
#include<cv.h>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

string p="/home/azamat/ClionProjects/roni1.jpg";
string p2 = "/home/azamat/ClionProjects/roni2.jpg";
Mat t, t2, res;
void bitwise ();
int main() {
    bitwise();
    return 0;
}
void bitwise (){

    t = imread(p);
    t2 = imread(p2);

    cvNamedWindow("1 Bild");
    cvNamedWindow("2 Bild");

    imshow("1 Bild", t );
    imshow("2 Bild", t2);
    cvNamedWindow("bit_And",1);
    cvNamedWindow("bit_Or",1);
    cvNamedWindow("bit_Xor",1);

    bitwise_and(t,t2,res);
    imshow("bit_And", res);

    bitwise_or(t,t2,res);
    imshow("bit_Or", res);

    bitwise_xor(t,t2,res);
    imshow("bit_Xor", res);

    waitKey(0);
}
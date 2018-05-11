#include "function.h"

int factorial(int n){
	if(n!=1){
		return(n*factorial(n-1));
	}
	else return 1;
}

void showImage(string location){
	Mat image;
    image = imread(location, CV_LOAD_IMAGE_COLOR); 

    if(! image.data )                        
    {
        cout <<  "Could not open or find the image" << std::endl ;
        return;
    }

    namedWindow( "Display window", CV_WINDOW_NORMAL);
    imshow( "Display window", image );                
    waitKey(0);  
}                                     


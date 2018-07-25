//
// Created by marshall on 7/25/18.
//

#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void openimage(string path) {
    Mat image = imread(path);
    if(image.empty()) {
        cout << "Could not open or find the image." << endl;
        cin.get();
    }

    String windowName = "Image";
    namedWindow(windowName);
    imshow(windowName, image);

    // wait for any keystroke in the window
    waitKey(0);

    destroyWindow(windowName);
}
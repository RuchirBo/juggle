/*
 * Author: Ruchir B
 * Creates and Animates a man juggling a ball in the terminal
 */

//libraries
#include <iostream>
#include <vector>
#include <unistd.h>

using namespace std;

//function prototypes
void printFrame(const vector<string>& frame);
void animate(const vector<vector<string>> frames);

int main() {

    //creating the frames of the animation
    vector<string> frame1{" ",
                          " ",
                          "o   0   /",
                          " \\_ | _/",
                          "    |",
                          "   / \\"};

    vector<string> frame2{" ",
                          " o",
                          "\\   0   /",
                          " \\_ | _/",
                          "    |",
                          "   / \\"};

    vector<string> frame3{"    o",
                          " ",
                          "\\   0   /",
                          " \\_ | _/",
                          "    |",
                          "   / \\"};

    vector<string> frame4{" ",
                          "       o",
                          "\\   0   /",
                          " \\_ | _/",
                          "    |",
                          "   / \\"};

    vector<string> frame5{" ",
                          " ",
                          "\\   0   o",
                          " \\_ | _/",
                          "    |",
                          "   / \\"};

    //creating the vector with all the frames
    vector<vector<string>> frames;
    frames.push_back(frame1);
    frames.push_back(frame2);
    frames.push_back(frame3);
    frames.push_back(frame4);
    frames.push_back(frame5);

    //animating
    animate(frames);
}

//function to print out every line in a frame
void printFrame(const vector<string>& frame) {

    //iterates through and prints out every line in a frame
    for (const string& line : frame) {
        cout << line << endl;
    }
    cout << endl;
}

//function to print out every frame
void animate(const vector<vector<string>> frames) {
    while (true) {

        //iterates through and print out every frame
        for (const vector<string>& frame : frames) {
            printFrame(frame);
            sleep(1);
        }
    }
}
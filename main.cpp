#include <iostream>
#include <argp.h>
#include <ros/ros.h>
#include <sensor_msgs/Image.h>
#include <rosbag/bag.h>

using namespace rosbag;

error_t parse_opt(int key, char *arg, argp_state *state) {

}

int main(char **argv, int argc) {
    argp_parse();
    Bag b;
    b.open();
    return 0;
}

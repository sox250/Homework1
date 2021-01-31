#!/bin/bash
{
	gnome-terminal -x bash -c "roscore;exec bash"
}&
sleep 1s
{
	gnome-terminal -x bash -c "rosrun turtlesim turtlesim_node;exec bash"
}&
sleep 1s
{
	gnome-terminal -x bash -c "rosrun turtlesim turtle_teleop_key;exec bash"
}

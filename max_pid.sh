#!/bin/bash

# Get the maximum process ID value from the kernel.
max_pid=$(cat /proc/sys/kernel/pid_max)

# Print the maximum process ID value to the console.
echo "Maximum process ID value: $max_pid"

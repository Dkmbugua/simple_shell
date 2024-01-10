#!/bin/bash
/**
 * the maximum processID value retrieved
 *
*/
the_pid_max_value $(= $getconfig PID_MAX)
echo "Maximum processID value: $the_pid_max_value"

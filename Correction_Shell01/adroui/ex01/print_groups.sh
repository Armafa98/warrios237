#!/bin/sh
FT_USER=adrouin-
groups $FT_USER | tr ' ' ',' | tr -d "\n"

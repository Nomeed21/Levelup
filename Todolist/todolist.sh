#!/bin/bash

echo "TO DO LIST:"
 
#Ask for tasks
task=$(zenity --entry --title="New Task" --text="Enter your task")
#Ask for what day is it ( I will base it on my daily schedule from school)

daytoday=$(zenity --entry --title="Day today" --text="What day is it today? [M, T, W, Th, F, Sat, Sun]:")

echo "task: $task (Reminder in $minutes minutes)"

#Checks what's the best time to remind the task to do

case $daytoday in
	M) 
		time=22:00
		;;
	T)
		time=19:00
		;;
	W)
		time=20:00
		;;
	Th)
		time=19:00
		;;
	F)
		time=19:00
		;;
	Sat) 
		time=19:00
		;;
	Sun)
		time=19:00
		;;
	*)
		echo "Input a valid Date [M, T, W, Th, F, Sat, Sun]"
		;;
	esac

echo "
zenity --question --title='Reminder' \
       --text='Did you finish this task?: $task' \
       --ok-label='Yes' --cancel-label='No'

if [ \$? -eq 0 ]; then
    zenity --info --text='Thank you! Come back tomorrow'
else
    zenity --info --text='I will remind you later'
    sleep 60m
    zenity --info --text='Reminder again: $task'
fi
" | at $time


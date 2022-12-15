/*
Make struct: mypipe, tempfd, 3 flags

Reset all: 		Set flags to 0
				Set fds:	mypipe[0] = 0
							mypipe[1] = 1
							mytemp = dup()

Two ints for the loop: i, curpos

Loop till null
	3 posibilities: if pipe, it colon, if end
			Set current arg to Null to ensure termination
			Set apropriate flag
			Call run command
			Adjust the curpos
			If colon, reset all
			If null, return


Run_cmd
	pipe()
	fork()

	Parent		close mypipe write
				close previous temfd
				tempfd = dup(mypipe[0])
				close mypipe read

	Child		2 scenarios:
					pipe, no colon/end
						read from temp instead 0
						write to mypipe instead 1

					pipe, with colon/end
						read from temp instead 0
						write to out instad to pipe
*/

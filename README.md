# Markov-Chain

A Markov Chain (MC) is a mathematical system that undergoes transitions from one state to another, where the next one depends only on the current state and not on the sequence of events that preceded it.
To use this MC, I start in some initial state and then use the transition probabilities to generate a sequence of states over time. 
MC convergences over time to its stationary distribution, meaning the probability of being in a given position is not changing with timeflow.
The transition probabilities are often represented in a transition matrix. It is widely used in areas of ML, sampling, and Graph Theory (e.g., PageRank). In this program, there are two states: 1 and 2.

# Results:
The plot of the MC trajectory for range (0,100):


![trajectory](https://github.com/ZofiaSzczepaniak/Markov-Chain/assets/169342885/ca2b95b7-5cce-43f8-a428-0c23602fd163)


Probability distribution of state 1 (purple line) and state 2 (green line) probability distribution. Stationary distribution of state 1 (blue line) and state 2 (red line):

![pistep5000](https://github.com/ZofiaSzczepaniak/Markov-Chain/assets/169342885/093111b6-dfbb-4fba-a6d4-6b0c440c4ccd)


# Instructions:
First to use the program, one must install the C++ compiler. To do so, enter the site and follow the given steps: https://code.visualstudio.com/

Then to start the program you must change the filename in the code.

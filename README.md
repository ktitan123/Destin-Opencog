Destin-Opencog
==============
Progress:



Exploring the destin codebase. I am mainly working on the file letters_experiment.py which essentially takes pictures of handwritten letters and generates the final beliefs by running the destin network which performs unsupervised learning.
I have tested this feature a lot also by adding tweaks. The results are pretty good but seemingly random though I suspect there is nothing I can do about it for now. Anyways it is able to identify the letters with a fair degree of accuracy.

What has already been implemented:

1. the destin belief network with all essential functionalities.
2. Translational Invariance though Uniform destin features. Basically each layer has a centroid pool in which all nodes in a layer share this pool of centroids.This implements translational invariance.
3. A function which recursively rescales centroids from one layer to another.This function is essential for implementation of scale invariance.


What I will implement/have implemented:

Basically my aim is the complete implementation as well as integration of scale invariance into the DESTIN network. The idea I am going with is the create another centroid pool similiar to one used for translational invariance and add the rescaled centroids into it. I am implementing it similiar to the uniform_addcentroids and uniform_deletecentroids functions in centroid.c.
This can lead to overheads as the number of centroids in a pool considerably increases. Also another crucial issue is how and when to call the rescaling functionality,calling it everytime could make the learning process extremely slow. These are issues I will tackle in the latter half of my GSOC coding period. 
Right now my code adds the resclaed centroid to the unform centroids pool in each layer as well as updated other factors such as variance,sigma etc. I am loosely following the methodology use in translational invariance with changes.



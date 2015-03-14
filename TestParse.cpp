/* Created by Michael Sy
 	for CS335. March 5th, 2015
 	*/

#include "SequenceMap.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <iterator>
#include <vector>
#include <string> 	

using namespace std;

void GetRebaseData(string filename_);

int main(int argc, char **argv) {
  if (argc != 3) {
    cout << "Usage: " << argv[0] << " <filename> <tree-type>" << endl;
    return 0;
  }
  string filename(argv[1]);
  string param_tree(argv[2]);
  cout << "Input filename is " << filename << endl;
  if (param_tree == "BST") {
    cout << "I will run the BST code" << endl;
    // Code for testing a BST tree
  } else if (param_tree == "AVL") {
    cout << "I will run the AVL code" << endl;
    // Code for testing an AVL tree
  }  else if (param_tree == "LazyAVL") {
    cout << "I will run the Lazy AVL code" << endl;
    // Code for testing Lazy AVL tree
  } else {
    cout << "Unknown tree type " << param_tree << " (User should provide BST, AVL, or LazyAVL)" << endl;
  }
  GetRebaseData(filename);


  return 0;
}
void GetRebaseData(string filename_)
{
	string line;
	string recognition_; // Map Key
	string enzyme_; // Map Data (for key)
	int slash_count_ = 0;
	int header = 10;
	int line_counter = 0;
	ifstream rebase(filename_);
	while(!rebase.eof())
	{
		getline(rebase, line);
		line_counter++;
		if (line_counter > header)
		{ // skips header
			for(unsigned int i = 0; i < line.length(); i++)
			{	
				if (line[i] == '/' && slash_count_== 0) cout << enzyme_ << " "; // TEST OUTPUT 
				if (line[i] == '/') 
					{ // Clears recognition in preparation for the next sequence.
						slash_count_++;
						cout << recognition_ << " "; // TEST OUTPUT
						recognition_.clear();
						i++; // Skips current '/'
					} // end if
				if (slash_count_ == 0) enzyme_+=line[i];
				if (slash_count_ > 0 ) recognition_+=line[i];
			} // end for 
			cout << endl;
		} // end if 
	} // end while
	rebase.close();
} // end GetRebaseData

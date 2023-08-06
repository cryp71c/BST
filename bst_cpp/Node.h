#pragma once
#include <type_traits>

class Node {
	public:
		int value;
		static Node left;
		static Node right;
		Node(int v) {
			value = v;
		}

		void set_left(Node l) {
		
		}

		void set_right(Node r) {
			
		}

		void search(int v) {

		}

		void insert(Node new_node, Node current_node) {
			if (!current_node.value) {
				std::cout << "Success!" << std::endl;
			
			}
		
		}
};
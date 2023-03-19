#include <iostream>
#include "Chat.h"
int main() {
	Chat chat;
	chat.start();
	while (chat.isWorking())
	{
		chat.loginMenu();
		while (chat.getCurrentUser()) {
			chat.userMenu();
		}
	}
	return 0;
}
#pragma once
#include <vector>
#include <exception>
#include <memory>
#include "Message.h"
struct UserLoginExp :public std::exception{//вызываем класс исключений, в случае, если логин уже существует или логин пользователя = all 
	const char* what() const noexcept override {
		return "error: user login is busy";
	}
	
};
struct UserNameExp:public std::exception {//вызываем класс исключений, в случае, если логин уже существует или логин пользователя = all 
	const char* what()const noexcept override {
		return "error: user name is busy";
	}
};
class Chat {
	bool Working = false;//переменная, отвечающая за работу чата
	std::vector<User> userList_;//вектор, который хранит пользователей чата
	std::vector<Message> messageList_;//вектор, который хранит сообщения в чате
	std::shared_ptr<User> currentUser_ = nullptr;//shared указатель указывает на текущего пользователя

	void showChat()const;
	void showAllUsersName()const;
	void addMessage();
	void login();
	void signUp();



	std::vector<User>& getAllUsers() {
		return userList_;
	}
	std::vector<Message>& getAllMessages() {
		return messageList_;
	}
	std::shared_ptr<User>getUserByLogin(const std::string& login)const;
	std::shared_ptr<User>getUserByName(const std::string& name)const;
	public:
		void start();
		bool isWorking()const {
			return Working;
		}
		std::shared_ptr<User>getCurrentUser()const {
			return currentUser_;
		}
		void loginMenu();
		void userMenu();

};
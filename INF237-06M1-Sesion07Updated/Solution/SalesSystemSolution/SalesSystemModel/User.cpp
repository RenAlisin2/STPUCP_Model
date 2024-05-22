/**
 * Project Restaurant Sales Systen
 * @author Johan Baldeón
 */
#include "pch.h"

#include "User.h"

/**
 * User implementation
 */

SalesSystemModel::User::User()
{    
}

SalesSystemModel::User::User(int id, String^ username, String^ password, String^ name, 
							String^ lastName, String^ status)
{
	this->Id = id;
	this->Username = username;
	this->Password = password;
	this->Name = name;
	this->LastName = lastName;
	this->Status = status;
}

/*
 * ServiceException.h
 *
 *  Created on: Jan 27, 2011
 *      Author: ftomale
 */

#ifndef SERVICEEXCEPTION_H_
#define SERVICEEXCEPTION_H_

#include <exception>
#include <string>

enum ServiceExceptionEnum {

};
typedef ServiceExceptionEnum ServiceException_t;

class ServiceException : public std::exception {

private:
	ServiceException_t _code;
	std::string _msg;
public:
	ServiceException(const ServiceException_t code, const std::string message);
	virtual ~ServiceException() throw ();

	ServiceException_t get_code(){ return _code; };
	std::string get_description(){ return _msg; };
};

#endif /* SERVICEEXCEPTION_H_ */

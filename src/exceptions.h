/*
 * Copyright (C) 2011 OnlineCity
 * Licensed under the MIT license, which can be read at: http://www.opensource.org/licenses/mit-license.php
 * @author hd@onlinecity.dk & td@onlinecity.dk
 */

#ifndef EXCEPTIONS_H_
#define EXCEPTIONS_H_

#include <stdexcept>

namespace smpp {
/**
 * Exception thrown when there is SMPP protocol related issues.
 */
class SmppException: public std::runtime_error
{
public:
	SmppException() :
			std::runtime_error("Default SmppException.")
	{
	}
	explicit SmppException(const std::string &message) :
			std::runtime_error(message)
	{
	}
};

class InvalidSystemIdException: public SmppException
{
public:
	InvalidSystemIdException() :
			SmppException()
	{
	}

	explicit InvalidSystemIdException(const std::string &message) :
			SmppException(message)
	{
	}
};

class InvalidPasswordException: public SmppException
{
public:
	InvalidPasswordException() :
			SmppException()
	{
	}
	explicit InvalidPasswordException(const std::string &message) :
			SmppException(message)
	{
	}
};

class InvalidSourceAddressException: public SmppException
{
public:
	InvalidSourceAddressException() :
			SmppException()
	{
	}
	InvalidSourceAddressException(const std::string &message) :
			SmppException(message)
	{
	}
};

class InvalidDestinationAddressException: public SmppException
{
public:
	InvalidDestinationAddressException() :
			SmppException()
	{
	}
	InvalidDestinationAddressException(const std::string &message) :
			SmppException(message)
	{
	}
};

/**
 * Exception thrown when there is transport/connection related issues.
 */
class TransportException: public std::runtime_error
{
public:
	TransportException() :
			std::runtime_error("Default TransportException.")
	{
	}
	explicit TransportException(const std::string &message) :
			std::runtime_error(message)
	{
	}
};
}

#endif /* EXCEPTIONS_H_ */


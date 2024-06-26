#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <exception>
#include <ostream>
#include <string>
#include "Form.hpp"
class Bureaucrat {
	
	private:
		const std::string name;
		int grade;

	public:
		Bureaucrat() = delete;
		Bureaucrat(const std::string _name, int _grade);
		Bureaucrat(const Bureaucrat& other) = default;
		~Bureaucrat();
		Bureaucrat& operator=(Bureaucrat& other);

		std::string getName() const;
		int getGrade() const;

		void decrementGrade();
		void incrementGrade();
		void singForm(Form form);

		class GradeTooHighException : public std::exception
		{
			const char * what() const noexcept;
		};
		class GradeTooLowException : public std::exception
		{
			const char * what() const noexcept;
		};
	
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif


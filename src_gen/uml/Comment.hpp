//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_COMMENT_HPP
#define UML_COMMENT_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#include <string>
#include <map>
#include <vector>
#include "boost/shared_ptr.hpp"
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
namespace uml 
{
	class Comment;
}

namespace ecore 
{
	class EAnnotation;
}

namespace uml 
{
	class Element;
}

// base class includes
#include "Element.hpp"

// enum includes


//*********************************
namespace uml 
{
	/*!
	 A Comment is a textual annotation that can be attached to a set of Elements.
	<p>From package UML::CommonStructure.</p> */
	class Comment:virtual public Element	{
		public:
 			Comment(const Comment &) {}
			Comment& operator=(Comment const&) = delete;
	
		protected:
			Comment(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~Comment() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Specifies a string that is the comment.
			<p>From package UML::CommonStructure.</p> */ 
			virtual std::string getBody() const = 0;
			
			/*!
			 Specifies a string that is the comment.
			<p>From package UML::CommonStructure.</p> */ 
			virtual void setBody (std::string _body)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 References the Element(s) being commented.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getAnnotatedElement() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 Specifies a string that is the comment.
			<p>From package UML::CommonStructure.</p> */ 
			std::string m_body ;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 References the Element(s) being commented.
			<p>From package UML::CommonStructure.</p> */
			std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> m_annotatedElement;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getOwnedElement() const = 0; 
	};

}
#endif /* end of include guard: UML_COMMENT_HPP */


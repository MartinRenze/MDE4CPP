//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_DIRECTEDRELATIONSHIP_HPP
#define UML_DIRECTEDRELATIONSHIP_HPP

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

namespace uml 
{
	class Relationship;
}

// base class includes
#include "Relationship.hpp"

// enum includes


//*********************************
namespace uml 
{
	/*!
	 A DirectedRelationship represents a relationship between a collection of source model Elements and a collection of target model Elements.
	<p>From package UML::CommonStructure.</p> */
	class DirectedRelationship:virtual public Relationship	{
		public:
 			DirectedRelationship(const DirectedRelationship &) {}
			DirectedRelationship& operator=(DirectedRelationship const&) = delete;
	
		protected:
			DirectedRelationship(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~DirectedRelationship() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 Specifies the source Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> m_source;
			/*!
			 Specifies the target Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> m_target;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getOwnedElement() const = 0;/*!
			 Specifies the target Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getTarget() const = 0;/*!
			 Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getRelatedElement() const = 0;/*!
			 Specifies the source Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getSource() const = 0; 
	};

}
#endif /* end of include guard: UML_DIRECTEDRELATIONSHIP_HPP */


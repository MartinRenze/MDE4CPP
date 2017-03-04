//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_DESTRUCTIONOCCURRENCESPECIFICATION_HPP
#define UML_DESTRUCTIONOCCURRENCESPECIFICATION_HPP

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

namespace uml 
{
	class Dependency;
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
	class GeneralOrdering;
}

namespace uml 
{
	class Interaction;
}

namespace uml 
{
	class InteractionOperand;
}

namespace uml 
{
	class Lifeline;
}

namespace uml 
{
	class Message;
}

namespace uml 
{
	class MessageOccurrenceSpecification;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class StringExpression;
}

// base class includes
#include "MessageOccurrenceSpecification.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A DestructionOccurenceSpecification models the destruction of an object.
	<p>From package UML::Interactions.</p> */
	class DestructionOccurrenceSpecification:virtual public MessageOccurrenceSpecification	{
		public:
 			DestructionOccurrenceSpecification(const DestructionOccurrenceSpecification &) {}
			DestructionOccurrenceSpecification& operator=(DestructionOccurrenceSpecification const&) = delete;
	
		protected:
			DestructionOccurrenceSpecification(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~DestructionOccurrenceSpecification() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 No other OccurrenceSpecifications on a given Lifeline in an InteractionOperand may appear below a DestructionOccurrenceSpecification.
			let o : InteractionOperand = enclosingOperand in o->notEmpty() and 
			let peerEvents : OrderedSet(OccurrenceSpecification) = covered.events->select(enclosingOperand = o)
			in peerEvents->last() = self */ 
			virtual bool no_occurrence_specifications_below(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
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
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getOwnedElement() const = 0;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Namespace> getNamespace() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Element> getOwner() const = 0; 
	};

}
#endif /* end of include guard: UML_DESTRUCTIONOCCURRENCESPECIFICATION_HPP */


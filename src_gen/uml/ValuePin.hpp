//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_VALUEPIN_HPP
#define UML_VALUEPIN_HPP

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
	class Activity;
}

namespace uml 
{
	class ActivityEdge;
}

namespace uml 
{
	class ActivityGroup;
}

namespace uml 
{
	class ActivityNode;
}

namespace uml 
{
	class ActivityPartition;
}

namespace uml 
{
	class Behavior;
}

namespace uml 
{
	class Classifier;
}

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
	class InputPin;
}

namespace uml 
{
	class InterruptibleActivityRegion;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class RedefinableElement;
}

namespace uml 
{
	class State;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class StructuredActivityNode;
}

namespace uml 
{
	class Type;
}

namespace uml 
{
	class ValueSpecification;
}

// base class includes
#include "InputPin.hpp"

// enum includes
#include "ObjectNodeOrderingKind.hpp"

#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A ValuePin is an InputPin that provides a value by evaluating a ValueSpecification.
	<p>From package UML::Actions.</p> */
	class ValuePin:virtual public InputPin	{
		public:
 			ValuePin(const ValuePin &) {}
			ValuePin& operator=(ValuePin const&) = delete;
	
		protected:
			ValuePin(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~ValuePin() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 A ValuePin may have no incoming ActivityEdges.
			incoming->isEmpty() */ 
			virtual bool no_incoming_edges(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 The type of the value ValueSpecification must conform to the type of the ValuePin.
			value.type.conformsTo(type) */ 
			virtual bool compatible_type(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The ValueSpecification that is evaluated to obtain the value that the ValuePin will provide.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::ValueSpecification> getValue() const = 0;
			
			/*!
			 The ValueSpecification that is evaluated to obtain the value that the ValuePin will provide.
			<p>From package UML::Actions.</p> */
			virtual void setValue(std::shared_ptr<uml::ValueSpecification> _value) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The ValueSpecification that is evaluated to obtain the value that the ValuePin will provide.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<uml::ValueSpecification> m_value;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::RedefinableElement>>> getRedefinedElement() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::Element>>> getOwnedElement() const = 0;/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityGroup>>> getInGroup() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Element> getOwner() const = 0; 
	};

}
#endif /* end of include guard: UML_VALUEPIN_HPP */


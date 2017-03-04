//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_ACTIONINPUTPIN_HPP
#define UML_ACTIONINPUTPIN_HPP

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
	class Action;
}

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
	 An ActionInputPin is a kind of InputPin that executes an Action to determine the values to input to another Action.
	<p>From package UML::Actions.</p> */
	class ActionInputPin:virtual public InputPin	{
		public:
 			ActionInputPin(const ActionInputPin &) {}
			ActionInputPin& operator=(ActionInputPin const&) = delete;
	
		protected:
			ActionInputPin(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~ActionInputPin() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The fromAction of an ActionInputPin must only have ActionInputPins as InputPins.
			fromAction.input->forAll(oclIsKindOf(ActionInputPin)) */ 
			virtual bool input_pin(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 The fromAction of an ActionInputPin must have exactly one OutputPin.
			fromAction.output->size() = 1 */ 
			virtual bool one_output_pin(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 The fromAction of an ActionInputPin cannot have ActivityEdges coming into or out of it or its Pins.
			fromAction.incoming->union(outgoing)->isEmpty() and
			fromAction.input.incoming->isEmpty() and
			fromAction.output.outgoing->isEmpty() */ 
			virtual bool no_control_or_object_flow(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The Action used to provide the values of the ActionInputPin.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::Action> getFromAction() const = 0;
			
			/*!
			 The Action used to provide the values of the ActionInputPin.
			<p>From package UML::Actions.</p> */
			virtual void setFromAction(std::shared_ptr<uml::Action> _fromAction) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The Action used to provide the values of the ActionInputPin.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<uml::Action> m_fromAction;
			

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
#endif /* end of include guard: UML_ACTIONINPUTPIN_HPP */


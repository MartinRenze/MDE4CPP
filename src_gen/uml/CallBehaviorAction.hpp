//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_CALLBEHAVIORACTION_HPP
#define UML_CALLBEHAVIORACTION_HPP

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
	class CallAction;
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
	class Constraint;
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
	class ExceptionHandler;
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
	class OutputPin;
}

namespace uml 
{
	class Port;
}

namespace uml 
{
	class RedefinableElement;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class StructuredActivityNode;
}

// base class includes
#include "CallAction.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A CallBehaviorAction is a CallAction that invokes a Behavior directly. The argument values of the CallBehaviorAction are passed on the input Parameters of the invoked Behavior. If the call is synchronous, the execution of the CallBehaviorAction waits until the execution of the invoked Behavior completes and the values of output Parameters of the Behavior are placed on the result OutputPins. If the call is asynchronous, the CallBehaviorAction completes immediately and no results values can be provided.
	<p>From package UML::Actions.</p> */
	class CallBehaviorAction:virtual public CallAction	{
		public:
 			CallBehaviorAction(const CallBehaviorAction &) {}
			CallBehaviorAction& operator=(CallBehaviorAction const&) = delete;
	
		protected:
			CallBehaviorAction(){}

		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~CallBehaviorAction() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 A CallBehaviorAction may not specify onPort.
			onPort=null */ 
			virtual bool no_onport(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The Behavior being invoked.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::Behavior> getBehavior() const = 0;
			
			/*!
			 The Behavior being invoked.
			<p>From package UML::Actions.</p> */
			virtual void setBehavior(std::shared_ptr<uml::Behavior> _behavior) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The Behavior being invoked.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<uml::Behavior> m_behavior;
			

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
			 The ordered set of OutputPins representing outputs from the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::OutputPin>>> getOutput() const = 0;/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::ActivityGroup>>> getInGroup() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Element> getOwner() const = 0;/*!
			 The ordered set of InputPins representing the inputs to the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<std::vector<std::shared_ptr<uml::InputPin>>> getInput() const = 0; 
	};

}
#endif /* end of include guard: UML_CALLBEHAVIORACTION_HPP */


//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_ACCEPTEVENTACTION_HPP
#define UML_ACCEPTEVENTACTION_HPP

#include <map>
#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T, class ... U> class Subset;


class AnyObject;
typedef std::shared_ptr<AnyObject> Any;

//*********************************
// generated Includes

#include <map>

namespace persistence
{
	namespace interfaces
	{
		class XLoadHandler; // used for Persistence
		class XSaveHandler; // used for Persistence
	}
}

namespace uml
{
	class UmlFactory;
}

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

namespace uml 
{
	class Trigger;
}

// base class includes
#include "uml/Action.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 An AcceptEventAction is an Action that waits for the occurrence of one or more specific Events.
	<p>From package UML::Actions.</p> */
	class AcceptEventAction:virtual public Action
	{
		public:
 			AcceptEventAction(const AcceptEventAction &) {}
			AcceptEventAction& operator=(AcceptEventAction const&) = delete;

		protected:
			AcceptEventAction(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~AcceptEventAction() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 If isUnmarshall=false and all the triggers are for SignalEvents, then the type of the single result OutputPin must either be null or all the signals must conform to it.
			not isUnmarshall implies 
				result->isEmpty() or
				let type: Type = result->first().type in
				type=null or 
					(trigger->forAll(event.oclIsKindOf(SignalEvent)) and 
					 trigger.event.oclAsType(SignalEvent).signal->forAll(s | s.conformsTo(type))) */ 
			virtual bool conforming_type(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 AcceptEventActions may have no input pins.
			input->size() = 0 */ 
			virtual bool no_input_pins(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 There are no OutputPins if the trigger events are only ChangeEvents and/or CallEvents when this action is an instance of AcceptEventAction and not an instance of a descendant of AcceptEventAction (such as AcceptCallAction).
			(self.oclIsTypeOf(AcceptEventAction) and
			   (trigger->forAll(event.oclIsKindOf(ChangeEvent) or  
			                             event.oclIsKindOf(CallEvent))))
			implies output->size() = 0 */ 
			virtual bool no_output_pins(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 If isUnmarshall=false and any of the triggers are for SignalEvents or TimeEvents, there must be exactly one result OutputPin with multiplicity 1..1.
			not isUnmarshall and trigger->exists(event.oclIsKindOf(SignalEvent) or event.oclIsKindOf(TimeEvent)) implies 
				output->size() = 1 and output->first().is(1,1) */ 
			virtual bool one_output_pin(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 If isUnmarshall is true (and this is not an AcceptCallAction), there must be exactly one trigger, which is for a SignalEvent. The number of result output pins must be the same as the number of attributes of the signal. The type and ordering of each result output pin must be the same as the corresponding attribute of the signal. The multiplicity of each result output pin must be compatible with the multiplicity of the corresponding attribute.
			isUnmarshall and self.oclIsTypeOf(AcceptEventAction) implies
				trigger->size()=1 and
				trigger->asSequence()->first().event.oclIsKindOf(SignalEvent) and
				let attribute: OrderedSet(Property) = trigger->asSequence()->first().event.oclAsType(SignalEvent).signal.allAttributes() in
				attribute->size()>0 and result->size() = attribute->size() and
				Sequence{1..result->size()}->forAll(i | 
					result->at(i).type = attribute->at(i).type and 
					result->at(i).isOrdered = attribute->at(i).isOrdered and
					result->at(i).includesMultiplicity(attribute->at(i))) */ 
			virtual bool unmarshall_signal_events(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Indicates whether there is a single OutputPin for a SignalEvent occurrence, or multiple OutputPins for attribute values of the instance of the Signal associated with a SignalEvent occurrence.
			<p>From package UML::Actions.</p> */ 
			virtual bool getIsUnmarshall() const = 0;
			
			/*!
			 Indicates whether there is a single OutputPin for a SignalEvent occurrence, or multiple OutputPins for attribute values of the instance of the Signal associated with a SignalEvent occurrence.
			<p>From package UML::Actions.</p> */ 
			virtual void setIsUnmarshall (bool _isUnmarshall)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 OutputPins holding the values received from an Event occurrence.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<Subset<uml::OutputPin, uml::OutputPin>> getResult() const = 0;
			
			/*!
			 The Triggers specifying the Events of which the AcceptEventAction waits for occurrences.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<Subset<uml::Trigger, uml::Element>> getTrigger() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 Indicates whether there is a single OutputPin for a SignalEvent occurrence, or multiple OutputPins for attribute values of the instance of the Signal associated with a SignalEvent occurrence.
			<p>From package UML::Actions.</p> */ 
			bool m_isUnmarshall = false;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 OutputPins holding the values received from an Event occurrence.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<Subset<uml::OutputPin, uml::OutputPin>> m_result;
			/*!
			 The Triggers specifying the Events of which the AcceptEventAction waits for occurrences.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<Subset<uml::Trigger, uml::Element>> m_trigger;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityGroup>> getInGroup() const = 0;/*!
			 The ordered set of OutputPins representing outputs from the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::OutputPin, uml::Element>> getOutput() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_ACCEPTEVENTACTION_HPP */
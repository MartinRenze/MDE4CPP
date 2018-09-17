//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_INTERACTIONUSE_HPP
#define UML_INTERACTIONUSE_HPP

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
	class Gate;
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
	class InteractionFragment;
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
	class Namespace;
}

namespace uml 
{
	class Property;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class ValueSpecification;
}

// base class includes
#include "uml/InteractionFragment.hpp"

// enum includes
#include "uml/VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 An InteractionUse refers to an Interaction. The InteractionUse is a shorthand for copying the contents of the referenced Interaction where the InteractionUse is. To be accurate the copying must take into account substituting parameters with arguments and connect the formal Gates with the actual ones.
	<p>From package UML::Interactions.</p> */
	class InteractionUse:virtual public InteractionFragment
	{
		public:
 			InteractionUse(const InteractionUse &) {}
			InteractionUse& operator=(InteractionUse const&) = delete;

		protected:
			InteractionUse(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~InteractionUse() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The InteractionUse must cover all Lifelines of the enclosing Interaction that are common with the lifelines covered by the referred Interaction. Lifelines are common if they have the same selector and represents associationEnd values.
			let parentInteraction : Set(Interaction) = enclosingInteraction->asSet()->
			union(enclosingOperand.combinedFragment->closure(enclosingOperand.combinedFragment)->
			collect(enclosingInteraction).oclAsType(Interaction)->asSet()) in
			parentInteraction->size()=1 and let refInteraction : Interaction = refersTo in
			parentInteraction.covered-> forAll(intLifeline : Lifeline | refInteraction.covered->
			forAll( refLifeline : Lifeline | refLifeline.represents = intLifeline.represents and 
			(
			( refLifeline.selector.oclIsKindOf(LiteralString) implies
			  intLifeline.selector.oclIsKindOf(LiteralString) and 
			  refLifeline.selector.oclAsType(LiteralString).value = intLifeline.selector.oclAsType(LiteralString).value ) and
			( refLifeline.selector.oclIsKindOf(LiteralInteger) implies
			  intLifeline.selector.oclIsKindOf(LiteralInteger) and 
			  refLifeline.selector.oclAsType(LiteralInteger).value = intLifeline.selector.oclAsType(LiteralInteger).value )
			)
			 implies self.covered->asSet()->includes(intLifeline))) */ 
			virtual bool all_lifelines(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 The arguments must only be constants, parameters of the enclosing Interaction or attributes of the classifier owning the enclosing Interaction. */ 
			virtual bool arguments_are_constants(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 The arguments of the InteractionUse must correspond to parameters of the referred Interaction. */ 
			virtual bool arguments_correspond_to_parameters(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 Actual Gates of the InteractionUse must match Formal Gates of the referred Interaction. Gates match when their names are equal and their messages correspond.
			actualGate->notEmpty() implies 
			refersTo.formalGate->forAll( fg : Gate | self.actualGate->select(matches(fg))->size()=1) and
			self.actualGate->forAll(ag : Gate | refersTo.formalGate->select(matches(ag))->size()=1) */ 
			virtual bool gates_match(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 The returnValueRecipient must be a Property of a ConnectableElement that is represented by a Lifeline covered by this InteractionUse.
			returnValueRecipient->asSet()->notEmpty() implies
			let covCE : Set(ConnectableElement) = covered.represents->asSet() in 
			covCE->notEmpty() and let classes:Set(Classifier) = covCE.type.oclIsKindOf(Classifier).oclAsType(Classifier)->asSet() in 
			let allProps : Set(Property) = classes.attribute->union(classes.allParents().attribute)->asSet() in 
			allProps->includes(returnValueRecipient) */ 
			virtual bool returnValueRecipient_coverage(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			/*!
			 The type of the returnValue must correspond to the type of the returnValueRecipient.
			returnValue.type->asSequence()->notEmpty() implies returnValue.type->asSequence()->first() = returnValueRecipient.type->asSequence()->first() */ 
			virtual bool returnValue_type_recipient_correspondence(Any diagnostics,std::map <   Any, Any >  context) = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The actual gates of the InteractionUse.
			<p>From package UML::Interactions.</p> */
			virtual std::shared_ptr<Subset<uml::Gate, uml::Element>> getActualGate() const = 0;
			
			/*!
			 The actual arguments of the Interaction.
			<p>From package UML::Interactions.</p> */
			virtual std::shared_ptr<Subset<uml::ValueSpecification, uml::Element>> getArgument() const = 0;
			
			/*!
			 Refers to the Interaction that defines its meaning.
			<p>From package UML::Interactions.</p> */
			virtual std::shared_ptr<uml::Interaction > getRefersTo() const = 0;
			
			/*!
			 Refers to the Interaction that defines its meaning.
			<p>From package UML::Interactions.</p> */
			virtual void setRefersTo(std::shared_ptr<uml::Interaction> _refersTo_refersTo) = 0;
			/*!
			 The value of the executed Interaction.
			<p>From package UML::Interactions.</p> */
			virtual std::shared_ptr<uml::ValueSpecification > getReturnValue() const = 0;
			
			/*!
			 The value of the executed Interaction.
			<p>From package UML::Interactions.</p> */
			virtual void setReturnValue(std::shared_ptr<uml::ValueSpecification> _returnValue_returnValue) = 0;
			/*!
			 The recipient of the return value.
			<p>From package UML::Interactions.</p> */
			virtual std::shared_ptr<uml::Property > getReturnValueRecipient() const = 0;
			
			/*!
			 The recipient of the return value.
			<p>From package UML::Interactions.</p> */
			virtual void setReturnValueRecipient(std::shared_ptr<uml::Property> _returnValueRecipient_returnValueRecipient) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The actual gates of the InteractionUse.
			<p>From package UML::Interactions.</p> */
			std::shared_ptr<Subset<uml::Gate, uml::Element>> m_actualGate;
			/*!
			 The actual arguments of the Interaction.
			<p>From package UML::Interactions.</p> */
			std::shared_ptr<Subset<uml::ValueSpecification, uml::Element>> m_argument;
			/*!
			 Refers to the Interaction that defines its meaning.
			<p>From package UML::Interactions.</p> */
			std::shared_ptr<uml::Interaction > m_refersTo;
			/*!
			 The value of the executed Interaction.
			<p>From package UML::Interactions.</p> */
			std::shared_ptr<uml::ValueSpecification > m_returnValue;
			/*!
			 The recipient of the return value.
			<p>From package UML::Interactions.</p> */
			std::shared_ptr<uml::Property > m_returnValueRecipient;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const = 0;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_INTERACTIONUSE_HPP */

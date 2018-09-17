//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_CONDITIONALNODECONDITIONALNODEIMPL_HPP
#define UML_CONDITIONALNODECONDITIONALNODEIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ConditionalNode.hpp"

#include "uml/impl/StructuredActivityNodeImpl.hpp"

//*********************************
namespace uml 
{
	class ConditionalNodeImpl :virtual public StructuredActivityNodeImpl, virtual public ConditionalNode 
	{
		public: 
			ConditionalNodeImpl(const ConditionalNodeImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ConditionalNodeImpl& operator=(ConditionalNodeImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ConditionalNodeImpl();
			virtual std::shared_ptr<ConditionalNode> getThisConditionalNodePtr() const;
			virtual void setThisConditionalNodePtr(std::weak_ptr<ConditionalNode> thisConditionalNodePtr);

			//Additional constructors for the containments back reference
			ConditionalNodeImpl(std::weak_ptr<uml::Activity > par_Activity, const int reference_id);


			//Additional constructors for the containments back reference


			//Additional constructors for the containments back reference
			ConditionalNodeImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);


			//Additional constructors for the containments back reference
			ConditionalNodeImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			ConditionalNodeImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			ConditionalNodeImpl(std::weak_ptr<uml::ActivityGroup > par_superGroup);




		public:
			//destructor
			virtual ~ConditionalNodeImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 No two clauses within a ConditionalNode may be predecessorClauses of each other, either directly or indirectly.
			clause->closure(predecessorClause)->intersection(clause)->isEmpty() */ 
			virtual bool clause_no_predecessor(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			 The union of the ExecutableNodes in the test and body parts of all clauses must be the same as the subset of nodes contained in the ConditionalNode (considered as a StructuredActivityNode) that are ExecutableNodes.
			clause.test->union(clause._'body') = node->select(oclIsKindOf(ExecutableNode)).oclAsType(ExecutableNode) */ 
			virtual bool executable_nodes(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			 Each clause of a ConditionalNode must have the same number of bodyOutput pins as the ConditionalNode has result OutputPins, and each clause bodyOutput Pin must be compatible with the corresponding result OutputPin (by positional order) in type, multiplicity, ordering, and uniqueness.
			clause->forAll(
				bodyOutput->size()=self.result->size() and
				Sequence{1..self.result->size()}->forAll(i |
					bodyOutput->at(i).type.conformsTo(result->at(i).type) and
					bodyOutput->at(i).isOrdered = result->at(i).isOrdered and
					bodyOutput->at(i).isUnique = result->at(i).isUnique and
					bodyOutput->at(i).compatibleWith(result->at(i)))) */ 
			virtual bool matching_output_pins(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			 A ConditionalNode has no InputPins.
			input->isEmpty() */ 
			virtual bool no_input_pins(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			 No ExecutableNode in the ConditionNode may appear in the test or body part of more than one clause of a ConditionalNode.
			node->select(oclIsKindOf(ExecutableNode)).oclAsType(ExecutableNode)->forAll(n | 
				self.clause->select(test->union(_'body')->includes(n))->size()=1) */ 
			virtual bool one_clause_with_executable_node(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			 The result OutputPins have no incoming edges.
			result.incoming->isEmpty() */ 
			virtual bool result_no_incoming(Any diagnostics,std::map <   Any, Any >  context) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 If true, the modeler asserts that the test for at least one Clause of the ConditionalNode will succeed.
			<p>From package UML::Actions.</p> */ 
			virtual bool getIsAssured() const ;
			
			/*!
			 If true, the modeler asserts that the test for at least one Clause of the ConditionalNode will succeed.
			<p>From package UML::Actions.</p> */ 
			virtual void setIsAssured (bool _isAssured); 
			
			/*!
			 If true, the modeler asserts that the test for at most one Clause of the ConditionalNode will succeed.
			<p>From package UML::Actions.</p> */ 
			virtual bool getIsDeterminate() const ;
			
			/*!
			 If true, the modeler asserts that the test for at most one Clause of the ConditionalNode will succeed.
			<p>From package UML::Actions.</p> */ 
			virtual void setIsDeterminate (bool _isDeterminate); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The set of Clauses composing the ConditionalNode.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<Subset<uml::Clause, uml::Element>> getClause() const ;
			
			/*!
			 The OutputPins that onto which are moved values from the bodyOutputs of the Clause selected for execution.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<Bag<uml::OutputPin>> getResult() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 ActivityEdges immediately contained in the ActivityGroup.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityEdge>> getContainedEdge() const ;/*!
			 ActivityNodes immediately contained in the ActivityGroup.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityNode>> getContainedNode() const ;/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityGroup>> getInGroup() const ;/*!
			 The ordered set of InputPins representing the inputs to the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::InputPin, uml::Element>> getInput() const ;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::NamedElement>> getMember() const ;/*!
			 The ordered set of OutputPins representing outputs from the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::OutputPin, uml::Element>> getOutput() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement>> getOwnedMember() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<uml::UmlFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<ConditionalNode> m_thisConditionalNodePtr;
	};
}
#endif /* end of include guard: UML_CONDITIONALNODECONDITIONALNODEIMPL_HPP */

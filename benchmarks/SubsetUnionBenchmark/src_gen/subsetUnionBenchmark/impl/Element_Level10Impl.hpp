//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef SUBSETUNIONBENCHMARK_ELEMENT_LEVEL10ELEMENT_LEVEL10IMPL_HPP
#define SUBSETUNIONBENCHMARK_ELEMENT_LEVEL10ELEMENT_LEVEL10IMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Element_Level10.hpp"

#include "subsetUnionBenchmark/impl/ElementImpl.hpp"

//*********************************
namespace subsetUnionBenchmark 
{
	class Element_Level10Impl :virtual public ElementImpl, virtual public Element_Level10 
	{
		public: 
			Element_Level10Impl(const Element_Level10Impl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			Element_Level10Impl& operator=(Element_Level10Impl const&) = delete;

		protected:
			friend class SubsetUnionBenchmarkFactoryImpl;
			Element_Level10Impl();
			virtual std::shared_ptr<Element_Level10> getThisElement_Level10Ptr() const;
			virtual void setThisElement_Level10Ptr(std::weak_ptr<Element_Level10> thisElement_Level10Ptr);



		public:
			//destructor
			virtual ~Element_Level10Impl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<subsetUnionBenchmark::SubsetUnionBenchmarkFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<Element_Level10> m_thisElement_Level10Ptr;
	};
}
#endif /* end of include guard: SUBSETUNIONBENCHMARK_ELEMENT_LEVEL10ELEMENT_LEVEL10IMPL_HPP */
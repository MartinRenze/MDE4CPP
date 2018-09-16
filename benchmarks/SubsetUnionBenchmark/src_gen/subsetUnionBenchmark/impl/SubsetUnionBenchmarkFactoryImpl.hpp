//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef SUBSETUNIONBENCHMARKFACTORYIMPL_HPP
#define SUBSETUNIONBENCHMARKFACTORYIMPL_HPP

#include "ecore/impl/EFactoryImpl.hpp"

#include "subsetUnionBenchmark/SubsetUnionBenchmarkFactory.hpp"

namespace subsetUnionBenchmark 
{	class Container;
	class Element;
	class Element_Level1;
	class Element_Level10;
	class Element_Level2;
	class Element_Level3;
	class Element_Level4;
	class Element_Level5;
	class Element_Level6;
	class Element_Level7;
	class Element_Level8;
	class Element_Level9;
}

namespace subsetUnionBenchmark 
{
	class SubsetUnionBenchmarkFactoryImpl : virtual public ecore::EFactoryImpl , virtual public SubsetUnionBenchmarkFactory 
	{
		private:    
			SubsetUnionBenchmarkFactoryImpl(SubsetUnionBenchmarkFactoryImpl const&) = delete;
			SubsetUnionBenchmarkFactoryImpl& operator=(SubsetUnionBenchmarkFactoryImpl const&) = delete;

		protected:
			friend class SubsetUnionBenchmarkFactory;
			// Constructor
			SubsetUnionBenchmarkFactoryImpl();

		public:
			virtual ~SubsetUnionBenchmarkFactoryImpl();
			virtual std::shared_ptr<ecore::EObject> create(std::string _className,  std::shared_ptr<ecore::EObject> container, const unsigned int referenceID = -1) const;
			virtual std::shared_ptr<ecore::EObject> create(const unsigned int classID,  std::shared_ptr<ecore::EObject> container = nullptr, const unsigned int referenceID = -1) const;
			virtual std::shared_ptr<ecore::EObject> create(std::shared_ptr<ecore::EClass> _class) const;
			virtual std::shared_ptr<ecore::EObject> create(std::shared_ptr<ecore::EClass> _class, std::shared_ptr<EObject> _container) const;
			virtual std::shared_ptr<ecore::EObject> create(std::string _className) const;

			//Creator functions
			virtual std::shared_ptr<Container> createContainer() const ;
			
			virtual std::shared_ptr<Element> createElement() const ;
			
			virtual std::shared_ptr<Element_Level1> createElement_Level1() const ;
			
			virtual std::shared_ptr<Element_Level10> createElement_Level10() const ;
			
			virtual std::shared_ptr<Element_Level2> createElement_Level2() const ;
			
			virtual std::shared_ptr<Element_Level3> createElement_Level3() const ;
			
			virtual std::shared_ptr<Element_Level4> createElement_Level4() const ;
			
			virtual std::shared_ptr<Element_Level5> createElement_Level5() const ;
			
			virtual std::shared_ptr<Element_Level6> createElement_Level6() const ;
			
			virtual std::shared_ptr<Element_Level7> createElement_Level7() const ;
			
			virtual std::shared_ptr<Element_Level8> createElement_Level8() const ;
			
			virtual std::shared_ptr<Element_Level9> createElement_Level9() const ;
			
			

			//Package
			virtual std::shared_ptr<SubsetUnionBenchmarkPackage> getSubsetUnionBenchmarkPackage() const;

		private:
			static SubsetUnionBenchmarkFactory* create();
            std::map<std::string,unsigned int> m_idMap;
	};
}
#endif /* end of include guard: SUBSETUNIONBENCHMARKFACTORYIMPL_HPP */
